//
//  Style.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 31/10/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"
#import "OSPMapCSSSpecifier.h"

@interface OSPMapCSSStyle : NSObject <CPParseResult>

@property (readwrite, copy) NSString *key;
@property (readwrite, retain) OSPMapCSSSpecifier *specifier;

@end
