#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Base recommendation calculation." << endl;
    }
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;
        cout << "Personalized recommendation score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;
        cout << "Trending recommendation score: " << score << endl;
    }
};

int main() {
    Recommender* r1 = new PersonalizedRecommender();
    Recommender* r2 = new TrendingRecommender();

    r1->generateRecommendation(85, 90);
    r2->generateRecommendation(85, 90);

    delete r1;
    delete r2;
    return 0;
}