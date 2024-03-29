//
//  SKTAudio.h
//  SKTUtils
//
//  Created by Wes Matlock on 6/24/13.
//  Copyright (c) 2013 Insoc, LLC. All rights reserved.
//

// Chapters 1-3
#import "SKTAudio.h"
@import AVFoundation;

@interface SKTAudio : NSObject

+ (instancetype)sharedInstance;
- (void)playBackgroundMusic:(NSString *)filename;
- (void)pauseBackgroundMusic;
- (void)playSoundEffect:(NSString*)filename;

@end