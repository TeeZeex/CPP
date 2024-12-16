
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShruberryCreationForm", 145, 137), _target("Default")
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
    // this->ascii_tree();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShruberryCreationForm", 145, 137), _target(_target)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	// this->ascii_tree();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object): AForm(object), _target(object.getTarget())
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		AForm::operator=(rhs);
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::ascii_tree() const
{
    std::ofstream file((this->_target + "_shrubbery").c_str());
    if (file.fail()) {
        throw ShrubberyCreationForm::ExecptionClass(); // Если файл не удалось открыть
    }

    // Пишем ASCII-дерево
    file << "              _{\\ _{\\{\\/}/}/}__            " << std::endl;
    file << "             {/{/\\}{/{/\\}(\\}{/\\} _         " << std::endl;
    file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _     " << std::endl;
    file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}    " << std::endl;
    file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}     " << std::endl;
    file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}     " << std::endl;
    file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}    " << std::endl;
    file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}    " << std::endl;
    file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}   " << std::endl;
    file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}  " << std::endl;
    file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)   " << std::endl;
    file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}   " << std::endl;
    file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}   " << std::endl;
    file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}   " << std::endl;
    file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)    " << std::endl;
    file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}        " << std::endl;
    file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}          " << std::endl;
    file << "              {){/ {\\/}{\\/} \\}\\}           " << std::endl;
    file << "              (_)  \\.-'.-/                 " << std::endl;
    file << "          __...--- |'-.-'| --...__         " << std::endl;
    file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << std::endl;
    file << " -\"    ' .  . '    |.'-._| '  . .  '   jro " << std::endl;
    file << " .  '-  '    .--'  | '-.'|    .  '  . '    " << std::endl;
    file << "          ' ..     |'-_.-|                 " << std::endl;
    file << "  .  '  .       _.-|-._ -|-._  .  '  .     " << std::endl;
    file << "              .'   |'- .-|   '.            " << std::endl;
    file << "  ..-'   ' .  '.   `-._.-�   .'  '  - .   " << std::endl;
    file << "   .-' '        '-._______.-'     '  .     " << std::endl;
    file << "        .      ~,                          " << std::endl;
    file << "    .       .   |\\   .    ' '-.            " << std::endl;
    file << "    ___________/  \\____________            " << std::endl;
    file << "   /  Why is it, when you want \\           " << std::endl;
    file << "  |  something, it is so damn   |          " << std::endl;
    file << "  |    much work to get it?     |          " << std::endl;
    file << "   \\___________________________/           " << std::endl;

    file.close();
}

void	 ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getGradeToExecute())
			{
				this->ascii_tree();
				std::cout << this->_target << "_shruberry tree has been created" << std::endl;
			}
			else
				throw AForm::GradeTooLowException();
		}
		else
			throw std::out_of_range("Bureaucrat Form Not Signed");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

const char *ShrubberyCreationForm::ExecptionClass::what() const throw() {
	return ("Couldn't Create/Open File");
}
