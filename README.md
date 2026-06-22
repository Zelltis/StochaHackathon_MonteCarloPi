# 🎲 StochaHackathon: Monte-Carlo Pi Simulation

Dieses kleine CLI-Tool demonstriert ein klassisches Konzept der Wahrscheinlichkeitsrechnung: Die **Monte-Carlo-Simulation** kombiniert mit dem **Gesetz der großen Zahlen (Law of Large Numbers)**.

## Das Stochastik-Konzept
Wir stellen uns ein Quadrat mit der Kantenlänge $r=1$ vor. Darin liegt ein Viertelkreis mit dem Radius $r=1$. 
Das Programm generiert zufällige Koordinaten $(x, y)$ im Intervall $[0, 1]$. 
Ein Punkt liegt innerhalb des Viertelkreises, wenn gilt: 
$$x^2 + y^2 \le 1$$

Die theoretische Wahrscheinlichkeit $P$, dass ein zufälliger Punkt im Viertelkreis landet, entspricht dem Flächenverhältnis:
$$P = \frac{\text{Fläche Viertelkreis}}{\text{Fläche Quadrat}} = \frac{\frac{1}{4} \pi r^2}{r^2} = \frac{\pi}{4}$$

Nach dem **Gesetz der großen Zahlen** nähert sich die relative Häufigkeit der Treffer bei unendlich vielen Versuchen der theoretischen Wahrscheinlichkeit an. Wir können Pi also approximieren:
$$\pi \approx 4 \cdot \frac{N_{\text{inside}}}{N_{\text{total}}}$$
Das Programm wirft 10 Millionen Punkte und visualisiert live in der Konsole, wie sich der Wert an $\pi$ annähert.

## Teilnahmebedingungen:
* **Free Software Only:** Der Code verwendet ausschließlich die C++ Standardbibliothek. Es gibt keine proprietären Abhängigkeiten.
* **Open Source:** Der gesamte Code liegt offen in diesem GitHub-Repository.
* **Easy Access (Installations-HowTo):** Du benötigst lediglich einen C++ Compiler (GCC/Clang/MSVC) und CMake.
  1. Klone das Repository: `git clone https://github.com/Zelltis/StochaHackathon_MonteCarloPi`
  2. Navigiere in den Ordner und erstelle die Build-Files: `cmake -B build`
  3. Kompiliere das Projekt: `cmake --build build`
  4. Führe die Datei aus: `./build/monte_carlo_pi` (bzw. `monte_carlo_pi.exe` unter Windows).
  *(Alternativ für den ganz schnellen Weg: Einfach `g++ main.cpp -o pi_sim` und `./pi_sim` ausführen!)*
