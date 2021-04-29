import urllib.request
import json


site= urllib.request.urlopen('https://competitive-coding-api.herokuapp.com/api/codechef/sanchit_28')

for x in site:
    site=(x.decode())
    break
site= json.loads(site)

if(site["status"]=="Failed"):
    print("Invalid username nigga\nTry again")
    exit()

#print(type(site))
#print("Name of user",site[""])
print("Rating:",site["rating"])
