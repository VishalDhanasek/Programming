#Input: AABAABB
#Output: 3

#METHOD 1:

s=input().strip()
print(len([x for x in range(len(s)-1)if s[x] == s[x+1]]))


#METHOD 2:


s=input().strip()
l=len(s)
while("AA" in s) : s = s.replace("AA", 'A')
while("BB" in s) : s = s.replace("BB", 'B')
print(l-len(s))
