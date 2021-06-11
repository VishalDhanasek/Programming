#The program must accept a character C and print the output based on the following conditions.
#- If C is r or R, the output must be RED
#- If C is g or G, the output must be GREEN
#- If C is b or B, the output must be BLUE
#- If C is any other value, the output must be UNDEFINED

#Example Input/Output 1:
#Input:
#R

#Output:
#RED


ch = input().upper()
result = "UNDEFINED"

if ch == "R":
    result = "RED"
elif ch == "G":
    result = "GREEN"
elif ch == "B":
    result = "BLUE"

print (result)
