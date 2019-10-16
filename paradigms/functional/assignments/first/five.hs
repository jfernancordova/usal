-- runhaskell five.hs

gr :: Int -> Int -> Int -> Int
gr a b c
    |a > b = a
    |a > c = a
    |b > a = b
    |b > c = b
    |otherwise = c

add :: Int -> Int -> Int
add x y = if x > y then x else y

main = do 

  let nv = (gr 9 1 4)
  let ov = (gr 15 5 7)

  print $ add nv ov