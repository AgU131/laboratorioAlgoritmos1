--  Arrancamos con haskel!!! en el lab
             --   19/082024

-- ejercicio lab 1
esCero :: Int -> Bool
esCero x = x==0


esPositivo :: Int -> Bool
esPositivo x = x>0


esVocal :: Char -> Bool
esVocal a = a=='a' || a=='e' || a=='i' || a=='o' || a=='u'

-- AltGr + 1 = | 
-- || = or

valorAbsoluto  :: Int -> Int
valorAbsoluto x 
   | (x >=0) = x 
   | otherwise = -x
{- OTRA FORMA

valorAbsoluto x =
                 if (x>=0) then x 
                  else (-x)       -}


-- ejercicio lab 2

paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x:xs) = x==True && paraTodo xs

sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs 

factorial :: Int -> Int
factorial 0 = 1 
factorial x = x * factorial (x-1)


-- ejercicio lab 3 (usar ejercicios 4a), 4b) y 4d))

--4 {paratodo i : 0<= i < #xs : xs.i>0}
cuatroA :: [Int] -> Bool
cuatroA [] = True
cuatroA (x:xs)
   | 0<=x && x < length (x:xs) = x > 0 && cuatroA xs
   | otherwise = False


--4b) {existe i : 0<= i < #xs : xs.i=x}
cuatroB :: [Int] -> Bool
cuatroB [] = True
cuatroB (x:xs)
   |  0<=x && x < length (x:xs) = x==fst xs && cuatroB xs
   | otherwise = True


--4d) {paratodo i : 0<= i < #xs-1 : xs.i= xs.(i+1)}
cuadroD :: [Int] -> Bool
cuatroD [] = True
cuatroD (x:xs)
   |  0<=x && x < length (x:xs) = x==fst xs && cuatroD xs        -- no listo ahun solo copy&paste del anterior
   | otherwise = True


{-

-}
-- ejercicio lab 4
