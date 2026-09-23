using namespace QPI;

struct TESTCON : public ContractBase
{
public:
    // This mirrors the private test and ensures the exemption cannot weaken the public ABI rule.
    using ForbiddenContainer = HashSet<sint8, 32>;

    struct PublicFunction_output
    {
        ForbiddenContainer set;
    };
    PUBLIC_FUNCTION(PublicFunction)
    {
    }
};
