--ghci class_nine.hs

tripla::[(Char, Int, Char)] -> Char -> [Char]
tripla [] _ = []
tripla ((a, _ , c) : xs ) d = if d == a then a : tripla xs d else c : tripla xs d

--runhaskell class_nine.hs
main = do 
  print $ tripla [('b', 3, 'c'),('b', 3, 'c')] 'a'