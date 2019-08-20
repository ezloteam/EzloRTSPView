//
//  NRTSPView.h
//  RTSPView
//
//  Created by Max Vitruk on 8/19/19.
//  Copyright © 2019 eZLO. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NRTSPView : UIView
//@property (nonatomic, strong) VLCMediaPlayer* mediaPlayer;

- (void)startStream:(NSString*) stringURL;
- (void)stopStream;

@end

NS_ASSUME_NONNULL_END
