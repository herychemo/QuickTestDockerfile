node {
    stage("Checkout") {
        git credentialsId: 'ssh', url: 'git@gitlab.com:herychemo/QuickTestJenkinsFile.git'
    }
    stage("Run"){
        sh """
            bash ./someScript.sh
        """
    }
}