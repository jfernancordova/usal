-- runhaskell four.hs

gr :: Int -> Int -> Int -> Int
gr a b c
    |a > b = a
    |a > c = a
    |b > a = b
    |b > c = b
    |otherwise = c

main = do 
  print $ gr 9 1 4