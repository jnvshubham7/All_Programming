

# sum the numbers from 1 to n using formula
def sum(n):
	return n*(n+1)//2
n=int(input())
print(sum(n))

# sum the numbers from 1 to n using recursion
def sum_rec(n):
	if(n==1):
    		return 1
	return n+sum_rec(n-1)
print(sum_rec(n))

# sum the numbers from 1 to n using iteration
def sum_iter(n):
	s=0
	for i in range(n+1):
		s+=i
	return s
print(sum_iter(n))

