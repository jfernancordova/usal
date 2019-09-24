-- runhaskell class.hs

main = do
  putStrLn "Hello"
  putStr ("Hello everyone")
  putStr ("\n")
  putStrLn "Insert a number"
  nro <- getLine
  putStr "Number "
  putStrLn nro

  let a = read nro
  if a > 0 then putStr "Positive" else putStr "Negative"
