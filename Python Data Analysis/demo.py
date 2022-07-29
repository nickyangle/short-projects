from tokenize import PlainToken
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_excel(r"C:\Users\nicky\Downloads\2022_product_downloads_data (2).xlsx")
print (df)

p=df['product'].value_counts()
print(p)


plt.figure(figsize=(2,2))
plt.title("Product A vs Product B")
lables = ["A", "B"]
plt.pie(p, labels=lables,autopct="%.1f%%")
plt.show()

r=df['geo_name'].value_counts()
print(r)

plt.figure(figsize=(3,3))
plt.title("Geographic Location")
labels = ["AMER", "EMEA", "APAC"]
plt.pie(r,labels=labels,autopct="%.1f%%")
plt.show()


pv = df['product_version'].value_counts()
print(pv)
plt.figure(figsize=(14,14))
plt.title("Versions in Use")
plt.xlabel('Version Number')
plt.ylabel('Number of Downloads')
labels = ["2.7", "2.6", "2.8", "2.9", "1.3", "1.4", "1.2", "2.5", "2.4", "1.1", "2.3", "1.5", "2.2", "2.1"]
plt.scatter(labels, pv )
plt.show()

