#ifndef PRADYAWONGAPP_H
#define PRADYAWONGAPP_H

#include "MooseApp.h"

class PradyawongApp;

template<>
InputParameters validParams<PradyawongApp>();

class PradyawongApp : public MooseApp
{
public:
  PradyawongApp(const std::string & name, InputParameters parameters);
  virtual ~PradyawongApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* PRADYAWONGAPP_H */
