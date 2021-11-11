"""
test.assert_equals(josephus([1,2,3,4,5,6,7,8,9,10],1),[1,2,3,4,5,6,7,8,9,10])
test.assert_equals(josephus([1,2,3,4,5,6,7,8,9,10],2),[2, 4, 6, 8, 10, 3, 7, 1, 9, 5])
test.assert_equals(josephus(["C","o","d","e","W","a","r","s"],4),['e', 's', 'W', 'o', 'C', 'd', 'r', 'a'])
test.assert_equals(josephus([1,2,3,4,5,6,7],3),[3, 6, 2, 7, 5, 1, 4])
test.assert_equals(josephus([],3),[])
"""


def josephus(items,k):
  last_index, ans = 0, []
  for i in range(len(items)):
    last_index = (last_index + k - 1) % len(items)
    ans.append(items.pop(last_index))
  return ans