--Resolucion 1er Parcial Laboratorio Algoritmos I
            -- by Agustin Heredia 44295961
-- Link Parcial: https://www.google.com/url?q=https://docs.google.com/document/d/1EhSVA0_2HyBVdf-HwfyKWmapkar_KIiFLBlSkstQwSY/export?format%3Dpdf&sa=D&source=editors&ust=1727103401344563&usg=AOvVaw3a-Tu83JrsNNGTi4qNT8xB

--Ejercicio 1
--a)

type Nombre = String
type Artista = Nombre
type ListaDeTemas = [String]
type AñoDeEstreno = Int
type Duracion = Int

data Lanzamiento = Album Nombre Artista ListaDeTemas AñoDeEstreno 
                 | Sencillo Nombre Artista Duracion AñoDeEstreno
    deriving Show

--b)
clicsModernos :: Lanzamiento
clicsModernos = Album "Clics Modernos" "Charly Garcia" ["Nos siguen pegando abajo", "No soy un extraño", "Dos cero uno", "Nuevos trapos", "Bancate ese defecto", "No me dejan salir", "Los dinosaurios", "Plateado sobre plateado", "Ojos de video tape"] 1983

africa :: Lanzamiento
africa = Sencillo "Africa" "Toto" 260 1982

--c)
sDelArtista :: Lanzamiento -> String -> Bool
sDelArtista (Sencillo _ artista _ _) a = artista == a
sDelArtista d a = False 
--Probado y funciona con ejemplo: sDelArtista (Sencillo "aa" "carlos" 123124 123) "carlos" ---> True

--d)
esEP :: Lanzamiento -> Bool
esEP (Album _ _ listaTemas _) = length (listaTemas) <= 4
esEP _ = False
--Probado. ej.: esEP (Album "aa" "dd" ["1", "adad", ""] 123) --> True

--e)
minSencillosArtista :: [Lanzamiento] -> String -> Int
minSencillosArtista [] _ = 0
minSencillosArtista ((Sencillo _ artista duracion _):xs) nombreArtista 
                | artista == nombreArtista = duracion + (minSencillosArtista xs nombreArtista)
                | otherwise = minSencillosArtista xs nombreArtista
minSencillosArtista (_:xs) nombreArtista = minSencillosArtista xs nombreArtista

{- Probado con ejemplos:
- minSencillosArtista [africa, (Sencillo "aa" "Toto" 111 1234), clicsModernos] "Toto" ---> 371

- minSencillosArtista [africa, clicsModernos, (Sencillo "aa" "bb" 111 1234)] "bb" ---> 111

- minSencillosArtista [clicsModernos, africa, (Sencillo "sss" "Toto" 999 212)] "Toto" ---> 1259 
-}


--Ejercicio 2
data ColaLanzamiento = Vacia | Encolada Lanzamiento ColaLanzamiento
        deriving Show

colaReproduccion :: ColaLanzamiento
colaReproduccion = Encolada clicsModernos (Encolada africa Vacia)


soloSencillos :: ColaLanzamiento -> ColaLanzamiento
soloSencillos Vacia = Vacia
soloSencillos (Encolada (Sencillo n a d y) cola) = Encolada (Sencillo n a d y) (soloSencillos cola)
soloSencillos (Encolada _ cola) = soloSencillos cola


{- Probada ejemplo: 
- soloSencillos (Encolada clicsModernos (Encolada africa (Encolada (Album "nom" "art" ["aa", "aaaa"] 1234) Vacia))) ---> Encolada (Sencillo "Africa" "Toto" 260 1982) Vacia

- soloSencillos (Encolada clicsModernos (Encolada africa (Encolada (Album "nom" "art" ["aa", "aaaa"] 1234) Vacia))) ---> Encolada (Sencillo "Africa" "Toto" 260 1982) Vacia
-}


