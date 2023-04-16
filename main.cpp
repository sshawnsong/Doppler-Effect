#include <iostream>

using namespace std;

//Speed of Sound
const double kSpeedOfSound = 343; //m/s

//Doppler Effect Formula
double DopplerEffect(double observer_velocity, double source_velocity, double source_frequency) {
    return source_frequency * (kSpeedOfSound + observer_velocity) / (kSpeedOfSound + source_velocity);
}

int main() {
    double source_velocity, observer_velocity, source_frequency;

        cout << "Enter the velocity of the observer (in m/s): ";
        cin >> observer_velocity;

    cout << "Enter the velocity of the source (in m/s): ";
    cin >> source_velocity;

    cout << "Enter the frequency of the source (in m/s): ";
    cin >> source_frequency;

    double observer_frequency = DopplerEffect(observer_velocity, source_velocity, source_frequency);

    cout << "The observer frequency is " << observer_frequency << " Hz." << endl;

    return 0;

}
