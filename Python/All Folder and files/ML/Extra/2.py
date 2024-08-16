import pandas as pd
import requests
from bs4 import BeautifulSoup

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; Win 64 ; x64) Apple WeKit /537.36(KHTML , like Gecko) Chrome/80.0.3987.162 Safari/537.36'}
html = requests.get(
    'https://www.tripadvisor.in/Hotels-g187147-Paris_Ile_de_France-Hotels.html', headers=headers)

soup = BeautifulSoup(html.text, 'html.parser')


hotel = []
for name in soup.findAll('div', {'class': 'listing_title'}):
    hotel.append(name.text.strip())

ratings = []
for rating in soup.findAll('a', {'class': 'ui_bubble_rating'}):
    ratings.append(rating['alt'])

reviews = []
for review in soup.findAll('a', {'class': 'review_count'}):
    reviews.append(review.text.strip())

price = []
for p in soup.findAll('div', {'class': 'price-wrap'}):
    price.append(p.text.replace('₹', '').strip())
d1 = {'Hotel': hotel, 'Ratings': ratings,
      'No_of_Reviews': reviews, 'Price': price}
df = pd.DataFrame.from_dict(d1)
df.to_csv("hotels_data.csv")