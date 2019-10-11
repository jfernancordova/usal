-- runhaskell one.hs

negative:: Int -> String
negative n = if n > 0 then "Error, the number is positive" else "Negative"

between:: Int -> String
between n = if n > -50 && n < 50 then "It is in range between -50 and 50" else "Error, the number is not in range between -50 and 50"

major:: Int -> String
major n = if n > 100 then "The number is greater than 100" else "Error, the number is not greater than 100"

main = do 

    putStrLn "Enter value:"
    input <- getLine

    let value = (read input :: Int)

    print $ negative value
    print $ between value
    print $ major value