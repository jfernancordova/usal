-- runhaskell five.hs

maximum' (x:xs) | (maximum xs) > x = maximum xs | otherwise = x

main = do 
  print $ maximum' [2, 5, 9, 12, 15, 60]