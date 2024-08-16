f_name = 's.txt' # Corrected: Enclose the filename in quotation marks

try:
    with open(f_name) as ff:
        lines = ff.readlines()
 
    for line in lines:
        print(line)
except FileNotFoundError:
    print("File not found.")
