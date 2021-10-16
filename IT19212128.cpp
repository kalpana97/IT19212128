class Admin
{
private:
    string AdminId;
    string AdminName;
    string AdminEmail;
    int AdminTele;

public:
    void registerPhotographer();
    void registerSupervisor();
    void assignSupervisors();

    //setters

    void setAdminId(int id)
    {
        AdminId = id;
    }

    void setAdminName(string name)
    {
        AdminName = name;
    }

    void setAdminEmail(string email)
    {
        AdminEmail = email;
    }

    void setAdminTele(int tele)
    {
        AdminTele = tele;
    }

    //getters
    string getAdminName()
    {
        return AdminName;
    }
    string getAdminEmail()
    {
        return AdminEmail;
    };
    string getAdminIC()
    {
        return AdminId;
    }
    int getAdminTele()
    {
        return AdminTele;
    }

    //constructor
    Admin()
    {
    }
    Admin(string name, string nic, string email, int tele)
    {

        AdminName = name;
        AdminId = nic;
        AdminTele = tele;
        AdminEmail = email;
    }
};