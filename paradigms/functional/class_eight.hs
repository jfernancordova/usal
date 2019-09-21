posit c xs = [x | x <- xs, x > 0]
multifacC xs fac = [x * fac | x <- xs]

main = do 
    print $ posit [1, 2, 9, 15]