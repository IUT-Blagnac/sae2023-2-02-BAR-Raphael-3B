package test;

import org.junit.Test;

import exercice.Exercice;

import static org.junit.Assert.assertEquals;
import static org.junit.jupiter.api.Assertions.assertAll;

import java.util.*;

public class ExerciceTest {
    @Test
    public void testSolution() {
    	assertAll("Grouped Assertions",
    			// Chaine simple avec ordre complet
    			() -> assertEquals(List.of("666","the", "the", "number", "of", "beast"), Exercice.solution("666, the number of the beast",List.of('6', 't', 'n', 'o', 'b'))),
    			// Chaine à 1 mot
    			() -> assertEquals("Erreur de chaine à 1 mot", List.of("OK"), Exercice.solution("OK",List.of('a', 'b', 'c', 'd', 'e'))),
    			// Chaine vide
    			() -> assertEquals(List.of(""), Exercice.solution("",List.of('6', 't', 'n', 'o', 'b'))),
    			// Chaine donnée en exemple
    			() -> assertEquals(List.of("fait", "Il", "aujourd", "aout", "beau", "hui", "comme", "en"), Exercice.solution("Il fait beau aujourd'hui comme en aout",List.of('f', 'I', 'z', 'u', 'k', 'a', 'b', 'o'))),

    			
    			// Test spécifique N°1
    			() -> assertEquals(List.of("Orange","Prune"), Exercice.solution("Prune Orange",List.of('O', 'P'))),
    			
    			// Test spacifique N°2
    			() -> assertEquals(List.of("orange", "Prune"), Exercice.solution("Prune orange",List.of('O', 'p'))),
    			
    			// Test spécifique N°3
    			() -> assertEquals(List.of("0range", "Prune"), Exercice.solution("Prune 0range",List.of('0', 'P'))),
    			
    			// Test spécifique N°4
    			() -> assertEquals(List.of("Ananas", "Citron", "Cerise", "Orange", "Prune", "Pomme", "Poire", "Gruyere"), Exercice.solution("Orange Poire Ananas Gruyere Citron Cerise ~#| Prune Pomme ",List.of('A', 'C', 'R', 'O', 'P')))
    	
    			);

	}
}
