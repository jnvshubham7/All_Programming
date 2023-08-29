import requests
from bs4 import BeautifulSoup
from tkinter import *
from PIL import ImageTk


#url for fatching data
page2= requests.get('https://www.worldometers.info/coronavirus/')

#for getting page content
Soup2 = BeautifulSoup(page2.content, 'html.parser')

#for finding specific data
info2 = Soup2.find_all(class_="maincounter-number")
root=Tk()
root.title("corona report")
root.geometry("400x550")
font = ("Helvetica", 12, "bold")



#function for getting optionly country data

def btn_click():
 country=c.get()
 page=requests.get('https://www.worldometers.info/coronavirus/country/' + country)
 Soup = BeautifulSoup(page.content, 'html.parser')
 info = Soup.find_all(class_='maincounter-number')

 
 a = [items.get_text() for items in info]
 ccd = Label(root,font=font,text=country + " Cases of Corona")
 ccd.pack()
 cc = Label(root,font=font,text=a[0])
 cc.pack()
 cdl = Label(root,font=font,text=country + " Cases of Deaths")
 cdl.pack()
 cd = Label(root,font=font,text=a[1])
 cd.pack()
 crl = Label(root,font=font,text=country + " Cases of Recovered")
 crl.pack()
 cr= Label(root,font=font,text=a[2])
 
 cr.pack()
 
    
canvas = Canvas(width = 640, height =360)
canvas.pack(expand = YES, fill = BOTH)


image = ImageTk.PhotoImage(file= (r"C:\users\user\desktop\covid.png"))


canvas.create_image(0, 0, image = image, anchor = CENTER)    


wc = Label(root,font=font,text="Enter country name")
wc.pack()
c = Entry(root, font=font)

c.pack()


sendBtn = Button(root, text="Find", command=btn_click,bg="green")

sendBtn.pack()
root.mainloop()