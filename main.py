def square_root_binary_search(x):
 
  if x == 0 or x == 1:
      return x

  l, r = 0, x // 2
  ans = 0


  while l <= r:
      mid = (l + r) // 2
      mid_squared = mid * mid

     
      if mid_squared == x:
          return mid
    
      elif mid_squared < x:
          l = mid + 1
          ans = mid  
      else:
          r = mid - 1

  return ans


print(square_root_binary_search(10)) 
print(square_root_binary_search(25)) 