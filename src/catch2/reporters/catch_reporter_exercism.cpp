#include <catch2/reporters/catch_reporter_streaming_base.hpp>
#include <catch2/catch_test_case_info.hpp>
#include <catch2/reporters/catch_reporter_registrars.hpp>

#include <iostream>

class ExercimReporter : public Catch::StreamingReporterBase {
public:
    using StreamingReporterBase::StreamingReporterBase;

    static std::string getDescription() {
        return "Reporter for testing TestCaseExercimStarting/Ended events";
    }

    void testCaseExercimStarting(Catch::TestCaseInfo const& testInfo,
                                 uint64_t partNumber) override {
        std::cout << "TestCaseStartingExercim: " << testInfo.name << '#' << partNumber << '\n';
    }

    void testCaseExercimEnded(Catch::TestCaseStats const& testCaseStats,
                              uint64_t partNumber) override {
        std::cout << "TestCaseExercimEnded: " << testCaseStats.testInfo->name << '#' << partNumber << '\n';
    }
};


CATCH_REGISTER_REPORTER("exercim", ExercimReporter)