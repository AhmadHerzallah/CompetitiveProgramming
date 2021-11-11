def dbl_linear(n):
  res = [1]
  x = 0
  y = 0
  for x in res:
    x = (2 * x + 1)
    y = (3 * x + 1)
    if x > z:
      res.append(z)
    elif x < z:
      res.append(x)
    else:
      res.append(x)
      x += 1
      y += 1
    if len(res) >= n+n:
      res.sort()
      print(res[n+1])
      break;

dbl_linear(20)