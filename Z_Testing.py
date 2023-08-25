import requests

year = 2010
orbit_class = "aten"
page = 1

response = requests.get(f"http://jsonmock.hackerrank.com/api/asteroids/search?page={page}").json()
total_pages = response["total_pages"]

asteroid_list = []

for page in range(1, total_pages + 1):
    response = requests.get(f"http://jsonmock.hackerrank.com/api/asteroids/search?page={page}").json()
    
    for asteroid in response["data"]:
        if str(year) == asteroid["discovery_date"][:4] and orbit_class.lower() in asteroid["orbit_class"].lower():
            if asteroid.get("period_yr") is None:
                asteroid["period_yr"] = 1
            asteroid["period_yr"] = float(asteroid["period_yr"])
            asteroid_list.append(asteroid)

asteroid_list.sort(key=lambda x: (x["period_yr"], x["designation"]))

designations = [asteroid["designation"] for asteroid in asteroid_list]

print(designations)
