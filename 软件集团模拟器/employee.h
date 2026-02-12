#pragma once
#include<string>
#include<map>
#include<unordered_map>
#include<vector>
class all_employee{
private:
    /*
    enum class positions {
        // --- 董事局/创始人级别 (0-5) ---
        Founder = 0,                // 创始人
        CoFounder = 1,             // 联合创始人
        Chairman = 2,             // 董事长
        ExecutiveDirector = 3,    // 执行董事
        NonExecutiveDirector = 4, // 非执行董事
        Supervisor = 5,           // 监事

        // --- C-Level 高管 (6-14) ---
        CEO = 6,                  // 首席执行官
        CFO = 7,                 // 首席财务官
        CTO = 8,                // 首席技术官
        COO = 9,                // 首席运营官
        CMO = 10,               // 首席营销官
        CHRO = 11,              // 首席人力资源官
        President = 12,         // 总裁
        VicePresident = 13,     // 副总裁
        ExecutiveDirectorAgain = 14, // 执行董事（保留，与上面区分）

        // --- 总监级 (15-34) ---
        Director = 15,              // 总监
        AssociateDirector = 16,    // 副总监
        DeputyDirector = 17,      // 副总监（备选）
        TechnicalDirector = 18,   // 技术总监
        RAndDDirector = 19,       // 研发总监
        ProductDirector = 20,     // 产品总监
        MarketingDirector = 21,   // 市场总监
        BrandDirector = 22,       // 品牌总监
        PRDirector = 23,          // 公关总监
        SalesDirector = 24,       // 销售总监
        OperationsDirector = 25,  // 运营总监
        AdminDirector = 26,       // 行政总监
        HRDirector = 27,          // 人力资源总监
        FinanceDirector = 28,     // 财务总监
        LegalDirector = 29,       // 法务总监
        HeadOfDepartment = 30,    // 部门负责人

        // --- 经理/主管级 (31-57) ---
        Manager = 31,               // 经理
        DeputyManager = 32,        // 副经理
        AssistantManager = 33,     // 副经理/经理助理
        SupervisorManager = 34,    // 主管
        TeamLead = 35,            // 开发组长
        TechLead = 36,           // 技术组长
        ProductManager = 37,     // 产品经理
        ProjectManager = 38,     // 项目经理
        AccountManager = 39,     // 客户经理
        BDManager = 40,         // 商务经理
        BrandManager = 41,      // 品牌经理
        DigitalMarketingManager = 42, // 数字营销经理
        SocialMediaManager = 43,     // 社交媒体经理
        OperationsManager = 44,      // 运营经理
        HRManager = 45,            // 人力资源经理
        FinanceManager = 46,       // 财务经理
        AdminManager = 47,        // 行政经理
        CustomerServiceManager = 48, // 客服经理

        // --- 专业岗/工程师/专员 (49-93) ---
        Architect = 49,            // 架构师
        DataScientist = 50,       // 数据科学家
        PreSalesEngineer = 51,    // 售前工程师
        AfterSalesEngineer = 52,  // 售后工程师
        BackendDeveloper = 53,    // 后端开发工程师
        FrontendDeveloper = 54,   // 前端开发工程师
        FullStackDeveloper = 55,  // 全栈工程师
        AlgorithmEngineer = 56,   // 算法工程师
        QAEngineer = 57,         // 测试工程师
        OpsEngineer = 58,        // 运维工程师
        DBA = 59,               // 数据库管理员
        DataAnalyst = 60,       // 数据分析师
        ContentOperator = 61,   // 内容运营
        UserOperator = 62,      // 用户运营
        ProductOperator = 63,   // 产品运营
        EventOperator = 64,     // 活动运营
        EcommerceOperator = 65, // 电商运营
        GraphicDesigner = 66,   // 平面设计师
        Copywriter = 67,        // 文案
        Specialist = 68,        // 专员
        Officer = 69,           // 专员
        Coordinator = 70,       // 协调员
        Recruiter = 71,         // 招聘专员
        TrainingSpecialist = 72, // 培训专员
        CBSpecialist = 73,      // 薪酬福利专员
        ERSpecialist = 74,      // 员工关系专员
        Accountant = 75,        // 会计
        Cashier = 76,           // 出纳
        Auditor = 77,           // 审计
        LegalSpecialist = 78,   // 法务专员
        LegalCounsel = 79,      // 法律顾问
        ComplianceOfficer = 80, // 合规专员
        CustomerServiceSpecialist = 81, // 客服专员

        // --- 助理/实习/基层 (82-86) ---
        ProductAssistant = 82,   // 产品助理
        HRAssistant = 83,       // 人事助理
        Receptionist = 84,      // 前台
        Assistant = 85,         // 助理
        Intern = 86,            // 实习生
        Staff = 87,             // 普通员工

        // --- 顾问 (88) ---
        Consultant = 88          // 顾问
    };
    enum class part {
        // 管理层
        Executive = 0,           // 集团管理层

        // 核心业务部门
        Tech = 1,               // 技术研发部
        Product = 2,            // 产品部
        Project = 3,           // 项目部
        Marketing = 4,         // 市场/商务部
        Operations = 5,        // 运营/客服部

        // 职能支持部门
        HR = 6,                // 人力资源部
        FinanceLegal = 7,      // 财务/法务部
        Admin = 8,            // 行政部

        // 通用岗位分类
        GeneralManagement = 9, // 通用管理岗
        GeneralStaff = 10,    // 通用基础岗

        // 顾问
        Consultant = 11       // 顾问
    };*/
	struct employee {
		std::string name;
		std::string part;
        std::string position;
		size_t salary;
		size_t id;
	};
    struct employee_list {
        std::unordered_multimap<std::string, employee> employee_list_name;
        std::map<size_t, employee> employee_list_id;
        std::unordered_multimap<std::string, employee> employee_list_part;
        std::unordered_multimap<std::string, employee>employee_list_position;
    };
public:
    employee_list employees;
    bool add_employee(employee &emp) {
        /*this->employees.employee_list_name[emp.name] = emp;
        if (employees.employee_list_id.find(emp.id) != employees.employee_list_id.end()) {
            this->employees.employee_list_id[emp.id] = emp;
        }else {
            return false;
        }
        this->employees.employee_list_part[emp.part]=emp;
        */

    }
};