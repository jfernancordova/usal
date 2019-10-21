--runhaskell one.hs

tripla :: (Int, Int, Int) -> Int -> Int
tripla (a, b , c) d
  | a > d = b 
  | otherwise = c

main = do 
  print $ tripla (1, 3, 4) 5