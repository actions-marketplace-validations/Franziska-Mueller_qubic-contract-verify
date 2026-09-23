using namespace QPI;

struct TESTCON : public ContractBase
{
public:
    // HashSet is intentionally forbidden for public I/O, but valid for internal PRIVATE_* calls.
    using ForbiddenContainer = HashSet<sint8, 32>;

    struct PrivateFunction_input
    {
        ForbiddenContainer set;
    };
    struct PrivateFunction_output
    {
        ForbiddenContainer set;
    };
    PRIVATE_FUNCTION(PrivateFunction)
    {
    }

    struct PrivateFunctionWithLocals_input
    {
        ForbiddenContainer set;
    };
    struct PrivateFunctionWithLocals_output
    {
        ForbiddenContainer set;
    };
    PRIVATE_FUNCTION_WITH_LOCALS(PrivateFunctionWithLocals)
    {
    }

    struct PrivateProcedure_input
    {
        ForbiddenContainer set;
    };
    struct PrivateProcedure_output
    {
        ForbiddenContainer set;
    };
    PRIVATE_PROCEDURE(PrivateProcedure)
    {
    }

    struct PrivateProcedureWithLocals_input
    {
        ForbiddenContainer set;
    };
    struct PrivateProcedureWithLocals_output
    {
        ForbiddenContainer set;
    };
    PRIVATE_PROCEDURE_WITH_LOCALS(PrivateProcedureWithLocals)
    {
    }
};
