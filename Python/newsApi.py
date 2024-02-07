import requests

def get_news(api_key, query):
    url = f"https://newsapi.org/v2/everything?q={query}&apiKey={api_key}"
    response = requests.get(url)
    data = response.json()
    return data

def print_articles(articles):
    for idx, article in enumerate(articles, start=1):
        print(f"Article {idx}:")
        print(f"Title: {article['title']}")
        print(f"Source: {article['source']['name']}")
        print(f"URL: {article['url']}")
        print()

api_key = "fa44c6cae5c94f739b7db22c2c7cc475"
query = input("Enter search query: ")
news_data = get_news(api_key, query)

if 'articles' in news_data:
    articles = news_data['articles']
    print_articles(articles)
else:
    print("No articles found.")
