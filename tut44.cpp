/* Virtual Base Class in C++ ===>>

    The virtual base class is a concept used in multiple inheritances to prevent ambiguity 
    between multiple instances. For example: suppose we created a class “A” and two classes “B” 
    and “C”, are being derived from class “A”. But once we create a class “D” which is being derived 
    from class “B” and “C”.

    1.Class “A” is a parent class of two classes “B” and “C”.
    2.And both “B” and “C” classes are the parent of class “D”.
*/
/*
// The syntax of the virtual base class is shown--->

    #include <iostream> 
    using namespace std; 
    class A { 
    public: 
       void say() 
       { 
          cout << "Hello world"<<endl; 
        } 
    }; 
    class B : public virtual A { 
    };   
    class C : public virtual A { 
    };   
    class D : public B, public C { 
    }; 
    
*/