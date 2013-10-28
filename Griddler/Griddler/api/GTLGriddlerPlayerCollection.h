/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2013 Google Inc.
 */

//
//  GTLGriddlerPlayerCollection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   griddler/v1
// Description:
//   Griddler API
// Classes:
//   GTLGriddlerPlayerCollection (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLGriddlerPlayer;

// ----------------------------------------------------------------------------
//
//   GTLGriddlerPlayerCollection
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLGriddlerPlayerCollection : GTLCollectionObject
@property (retain) NSArray *items;  // of GTLGriddlerPlayer
@end