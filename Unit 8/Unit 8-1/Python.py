rate=5;
factor=1;
if rate==1 or rate==2:
    factor = 2 * rate - 1
elif rate == 3 or rate == 5:
    factor = 3 * rate + 1
elif rate==4:
    factor = 4 * rate - 1
elif rate == 6 or rate == 7 or rate == 8:
    factor = rate-2
else:
    factor=rate
print(factor)