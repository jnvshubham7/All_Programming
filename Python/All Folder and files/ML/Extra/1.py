import requests
import bs4
site = requests.get("https://www.worldometers.info/coronavirus/country/india/")

soup = bs4.BeautifulSoup(site.text,"lxml")
head = soup.select("#maincounter-wrap h1")
num = soup.select("#maincounter-wrap .maincounter-number span")
list = []
for i in range(len(head)):
    list.append([head[i].getText(),num[i].getText()])
list