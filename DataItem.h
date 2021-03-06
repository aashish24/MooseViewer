#ifndef _DATAITEM_H
#define _DATAITEM_H

// MooseViewer includes
#include "MooseViewer.h"

// VTK includes
#include <vtkSmartPointer.h>

// Forward declarations
class ExternalVTKWidget;
class vtkActor;
class vtkAppendPolyData;
class vtkColorTransferFunction;
class vtkCompositeDataGeometryFilter;
class vtkContourFilter;
class vtkGaussianSplatter;
class vtkLight;
class vtkLookupTable;
class vtkPiecewiseFunction;
class vtkPolyDataMapper;
class vtkSmartVolumeMapper;
class vtkVolume;

struct MooseViewer::DataItem : public GLObject::DataItem
{
/* Elements */
public:
  /* VTK components */
  vtkSmartPointer<ExternalVTKWidget> externalVTKWidget;
  vtkSmartPointer<vtkActor> actor;
  vtkSmartPointer<vtkActor> actorOutline;
  vtkSmartPointer<vtkCompositeDataGeometryFilter> compositeFilter;
  vtkSmartPointer<vtkPolyDataMapper> mapper;
  vtkSmartPointer<vtkLookupTable> lut;
  vtkSmartPointer<vtkLight> flashlight;

  vtkSmartPointer<vtkAppendPolyData> contours;
  vtkSmartPointer<vtkActor> contourActor;
  vtkSmartPointer<vtkPolyDataMapper> contourMapper;

  vtkSmartPointer<vtkGaussianSplatter> gaussian;
  vtkSmartPointer<vtkVolume> actorVolume;
  vtkSmartPointer<vtkSmartVolumeMapper> mapperVolume;
  vtkSmartPointer<vtkColorTransferFunction> colorFunction;
  vtkSmartPointer<vtkPiecewiseFunction> opacityFunction;

  vtkSmartPointer<vtkContourFilter> aContour;
  vtkSmartPointer<vtkPolyDataMapper> aContourMapper;
  vtkSmartPointer<vtkActor> actorAContour;
  vtkSmartPointer<vtkContourFilter> bContour;
  vtkSmartPointer<vtkPolyDataMapper> bContourMapper;
  vtkSmartPointer<vtkActor> actorBContour;
  vtkSmartPointer<vtkContourFilter> cContour;
  vtkSmartPointer<vtkPolyDataMapper> cContourMapper;
  vtkSmartPointer<vtkActor> actorCContour;

  /* Constructor and destructor*/
  DataItem(void);
  virtual ~DataItem(void);
};

#endif //_DATAITEM_H
