--extras del practico añadidos desde una netbookdel goierno
--Ejercicios de segmentacion


--Ejercicio 14
suma :: [Int] -> Int
suma [] = 0
suma (x:xs) = x + suma xs 

--a) ⟨∀as,bs : xs = as ++ bs : sum.as ≥ 0⟩ 
-- generalizacion funcion gen.n.xs=⟨∀as,bs : xs = as ++ bs : n + sum.as ≥ 0⟩ 

funcionGen :: Int -> [Int] -> Bool
funcionGen n [] = n >= 0
funcionGen n (x:xs) =  n + suma (x:xs) >= 0 && funcionGen (n+x) xs

funcion :: [Int] -> Bool
funcion xs = funcionGen 0 xs 


--b) ⟨Min as,bs,cs : xs = as ++ bs ++ cs : sum.bs⟩ 
--Necesitamos generalizar tambien, creo
funMin :: [Int] -> Int
funMin [] = 0
funMin (x:xs) = suma xs --mal



{-

 c) ⟨Nas,b,bs : xs = as ++ (b ▷ bs) : b > sum.bs⟩ 
 d) ⟨Max as,bs,cs : xs = as ++ bs∧ys = as ++ cs : #as⟩ 


-}







