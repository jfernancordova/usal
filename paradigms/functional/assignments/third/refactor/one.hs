--runhaskell one.hs

tripla::[(Int, Int, Int)] -> Int -> Int
tripla ((a, b , c) : xs ) d = if a > d then b else c

main = do 
  print $ tripla [(1, 3, 4)] 5