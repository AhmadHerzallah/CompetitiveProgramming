"""
josephus_survivor(7,3) => means 7 people in a circle;
one every 3 is eliminated until one remains
[1,2,3,4,5,6,7] - initial sequence
[1,2,4,5,6,7] => 3 is counted out
[1,2,4,5,7] => 6 is counted out
[1,4,5,7] => 2 is counted out
[1,4,5] => 7 is counted out
[1,4] => 5 is counted out
[4] => 1 counted out, 4 is the last element - the survivor!
"""

def josephus_survivor(n,k):
    circle, last_index = list(range(1,n+1)), 0
    for i in range(len(circle)):
        last_index = (last_index + k - 1) % len(circle)
        if len(circle) != 1: circle.pop(last_index)
    return circle[0]

print(josephus_survivor(11,19))

# josephus_survivor(7,3) # 4
# josephus_survivor(11,19) #10
# josephus_survivor(1,300) #1
# josephus_survivor(14,2)# 13
# josephus_survivor(100,1) # 100