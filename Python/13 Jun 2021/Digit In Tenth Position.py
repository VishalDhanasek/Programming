#The program must accept a positive integer N and print the digit in the tenth position.

#Input Format:
#The first line denotes the value of N.

#Output Format:
#The first line contains the value of N.

N = int(input())
tenthdigit = int(N/10)%10
print (tenthdigit)
