#include <iostream>
#include <random>
#include <iomanip>

int main() {
    std::cout << "=== Stochahackathon: Monte-Carlo Pi Simulation ===\n\n";
    
    const long long num_iterations = 10'000'000;
    long long inside_circle = 0;

    // Modern C++ RNG Setup
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0.0, 1.0);

    std::cout << "Simuliere " << num_iterations << " zufaellige Punkte (Law of Large Numbers)...\n\n";

    for (long long i = 1; i <= num_iterations; ++i) {
        // Generiere x und y Koordinaten zwischen 0 und 1
        double x = dist(gen);
        double y = dist(gen);

        // Pruefe, ob der Punkt innerhalb des Einheitskreises liegt (x^2 + y^2 <= 1)
        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }

        // Konsolen-Update alle 100.000 Iterationen
        if (i % 100'000 == 0) {
            double pi_approx = 4.0 * static_cast<double>(inside_circle) / i;
            std::cout << "\rPunkte geworfen: " << i 
                      << " | Aktuelle Pi-Naeherung: " << std::fixed << std::setprecision(6) << pi_approx << std::flush;
        }
    }

    double final_pi = 4.0 * static_cast<double>(inside_circle) / num_iterations;
    std::cout << "\n\nSimulation beendet!\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "Theoretischer Wert von Pi: ~3.141592\n";
    std::cout << "Berechneter Wert von Pi:    " << final_pi << "\n";
    std::cout << "--------------------------------------------------\n";

    return 0;
}
