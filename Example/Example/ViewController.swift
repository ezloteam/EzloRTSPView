//
//  ViewController.swift
//  Example
//
//  Created by Max Vitruk on 8/19/19.
//  Copyright © 2019 eZLO. All rights reserved.
//

import UIKit
import RTSPView

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let vc : KxMovieViewController = KxMovieViewController.movieViewController(withContentPath: "rtsp://admin:admin123@192.168.30.73", parameters: [:]) as! KxMovieViewController
        self.navigationController?.pushViewController(vc, animated: true)
        // Do any additional setup after loading the view.
    }


}

