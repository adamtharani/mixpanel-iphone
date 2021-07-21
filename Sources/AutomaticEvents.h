//
//  AutomaticEvents.h
//  Mixpanel
//
//  Created by Yarden Eitan on 4/18/17.
//  Copyright © 2017 Mixpanel. All rights reserved.
//
#if !TARGET_OS_OSX
#import <UIKit/UIKit.h>
#endif
#import "MixpanelPeople.h"


@protocol TrackDelegate <NSObject>
- (void)track:(NSString *)event properties:(NSDictionary *)properties;
@end

@interface AutomaticEvents: NSObject
@property (atomic, weak) id<TrackDelegate> delegate;
@property (atomic, assign) UInt64 minimumSessionDuration;
@property (atomic, assign) UInt64 maximumSessionDuration;
- (void)initializeEvents:(MixpanelPeople *)peopleInstance;

@end

