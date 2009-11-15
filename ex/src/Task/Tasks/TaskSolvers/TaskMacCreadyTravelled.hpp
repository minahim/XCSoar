#ifndef TASKMACCREADYTRAVELLED_HPP
#define TASKMACCREADYTRAVELLED_HPP

#include "TaskMacCready.hpp"

/** 
 * Specialisation of TaskMacCready for task travelled
 */
class TaskMacCreadyTravelled: 
  public TaskMacCready
{
public:
  TaskMacCreadyTravelled(const std::vector<OrderedTaskPoint*> &_tps,
                         const unsigned _activeTaskPoint,
                         const GlidePolar &_gp);

protected:
  virtual GlideResult tp_solution(const unsigned i,
                                   const AIRCRAFT_STATE &aircraft, 
                                   double minH) const;
  virtual double get_min_height(const AIRCRAFT_STATE &aircraft) const {
    return aircraft.Altitude;
  }
  virtual const AIRCRAFT_STATE get_aircraft_start(const AIRCRAFT_STATE &aircraft) const;
};

#endif

