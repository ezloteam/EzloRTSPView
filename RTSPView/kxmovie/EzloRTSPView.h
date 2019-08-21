//
//  EzloRTSPView.h
//  RTSPView
//
//  Created by Max Vitruk on 8/20/19.
//  Copyright © 2019 eZLO. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EzloRTSPView : UIView

@property (readonly) BOOL playing;

- (void) startStream:  (NSString *) path;
- (void) play;
- (void) pause;
- (void) useMemoryWarning;
@end

NS_ASSUME_NONNULL_END
