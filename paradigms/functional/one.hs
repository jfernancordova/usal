-- runhaskell one.hs
par:: Int -> Bool
par x =
    if mod x 2==0
    then True
    else False

main = do
    putStrLn "Enter value: "
    input <- getLine
    let x = (read input :: Int)
    if (par x) then putStrLn "Par" else putStrLn "Impar"