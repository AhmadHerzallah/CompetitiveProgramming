def dbl_linear(n):
  res = [1] 
  x, y = 0, 0
  while(len(res)<=n) : 
    a = 2 * res[x] + 1 
    b = 3 * res[y] + 1 
    if a>b : 
      res.append(b)
      y+= 1 
    elif a<b : 
      res.append(a)
      x += 1 
    else : 
      res.append(a)
      x += 1 
      y += 1
  return res[n]
print(dbl_linear(20))
