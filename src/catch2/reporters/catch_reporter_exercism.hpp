#include <catch2/catch_test_case_info.hpp>
#include <catch2/reporters/catch_reporter_registrars.hpp>
#include <catch2/reporters/catch_reporter_streaming_base.hpp>

class ExercimReporter : public Catch::StreamingReporterBase {
public:
    using StreamingReporterBase::StreamingReporterBase;

    static std::string getDescription();

    void testCaseExercimStarting( Catch::TestCaseInfo const& testInfo,
                                  uint64_t partNumber ) override;

    void testCaseExercimEnded( Catch::TestCaseStats const& testCaseStats,
                               uint64_t partNumber ) override;
};